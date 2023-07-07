using c = int;
template <bool, typename, typename d> using e = d;
template <typename f, typename g> constexpr bool h = __is_same(f, g); 
template <typename f, typename g> concept ac = h<f, g>; 
template <typename f, typename g> concept ad = ac<g, f>; 
template <typename i> concept k = ad<typename i::af, c>; 
template <typename, typename, template <typename> typename... ah> 
struct m : ah<int>... {
  using aj = m;
  m();
  template <typename al> m(al) requires(k<aj>);
};
template <typename> struct ao { using af = int; };
template <typename> struct ap {}; 
template <typename> struct aq {}; 
template <typename> struct ar {}; 
template <typename> struct au {
  template <typename> struct av {}; 
};
template <typename> struct aw {}; 
struct n { 
  template <typename> using ay = decltype(0);
};
struct ba; 
template <typename ag> concept bb = ad<typename ag::bc, c>; 
template <typename ag> concept bd = ad<typename ag::be, ba>;
template <typename, typename> struct bf {
  using bc = int;
  using bg = n;
  using bh = n;
  using be = e<0, int, ba>;
};
template <typename> struct D : bf<int, int> {}; 
template <typename> struct bl {
  template <typename> struct av {}; 
};
template <typename ag, typename bk> 
struct bm : m<bm<ag, bk>, ag, aw, aq, ar, ap, au<ag>::template av, ao, 
              bl<bk>::template av> {
  using m<bm, ag, aw, aq, ar, ap, au<ag>::template av, ao, 
          bl<bk>::template av>::m;
};
template <bb bn, typename bo> struct l { 
  using bp = bm<bo, bf<typename bn::bg, typename bn::bh>>;
};
template <bd bq> struct o { 
  using bs = typename bq::bg;
  using bt = typename bq::bh;
  using bu = typename bs::template ay<bt>;
  using bv = typename bt::template ay<bs>;
  using bw = bf<bu, bv>;
};
template <bd bq, bd bz> auto operator*(bq, bz b) {
  auto ca(b);
  using cb = typename o<bq>::bw;
  using cc = typename l<cb, decltype(ca)>::bp;
  return cc{};
}
struct cd : m<int, long, D> {}; 
using ce = decltype(cd{} * cd{});
void p() {
  for (auto j = 6;; ce{j})
    ;   
}
