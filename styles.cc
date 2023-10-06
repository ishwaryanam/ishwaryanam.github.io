:root{
    /*variables*/
    --cg-grey: rgb(30,32,32);
}
body {
  background: var(--cg-grey);
  font-size: 14px;
}

.navbar {
  position: -webkit-sticky;
  position: sticky;
  top: 0;
  width: 100%;
  height: 7%;
  z-index: 10;

  display: flex;
  justify-content: space-between;
  align-items: center;
  text-align: center;

  background-color: var(--cg-black);
  color: var(--cg-white);
  padding: 0px 0px;

  /* Debug border */
  /* border: solid red; */
}


