function decoder(palavra) {
  char = "";
  for (i = 0; i < palavra.length; i++) {
    char += String.fromCharCode(palavra.charCodeAt(i) - 7);
  }
  console.log(char);
}

decoder("1JKJ'pz'{ol'{yhklthyr'vm'{ol'Jvu{yvs'Kh{h'Jvywvyh{pvu5")
decoder("1PIT'pz'h'{yhklthyr'vm'{ol'Pu{lyuh{pvuhs'I|zpulzz'Thjopul'Jvywvyh{pvu5")
decoder("1KLJ'pz'{ol'{yhklthyr'vm'{ol'Kpnp{hs'Lx|pwtlu{'Jvywvyh{pvu5")