:root {
    --font-roboto: "Roboto Slab", serif;
    --premeri-color: #fd6038;
}

html {
    font-size: 62.5%;
    --font-manrope: "Manrope", sans-serif;
}

* {
    box-sizing: border-box;
}

/* header */
html {
}
.header--wrap {
    overflow: hidden;
    min-height: 100vh;
    background-color: #f8ebc9;
    padding-bottom: 100px;
}

.header {
    padding-top: 30px;
}
/* header navigation */
.header--navigation {
    display: flex;
    justify-content: space-between;
    height: 67px;
    margin-bottom: 100px;
}

/* headẻ logo */
.fa-gavel {
    font-size: 2rem;
}
.header--logo {
    width: 84px;
    height: 67px;
    text-align: center;
}

.header--logo p {
    font-size: 1.5rem;
}
.header--logo__bold {
    font-size: 2.5rem;
    font-weight: 700;
}

/* header narbar  */
.header--navbar {
    margin: auto 0;
}
.header--list {
    width: 523px;
    height: 28px;
    display: flex;
}
.header--list li {
    margin: auto 0;
    text-align: center;
}
.header--list li a {
    color: #111;
    font-size: 1.5rem;
    display: inline-block;
    padding: 10px;
}

.header--list li a:hover {
    color: var(--premeri-color);
    
}

.header--list li a:hover + i{
    transform: translateY(2px);
    rotate: 180deg;
    color: var(--premeri-color);
}

/* header call */

.header--call {
    margin: auto 0;
    width: 231px;
    height: 32px;
    display: flex;
    justify-content: center;
    align-items: center;
}

.header--call__text {
    font-size: 1.4rem;
    margin-right: 5px;
}

.header--call__bold {
    font-size: 1.8rem;
    font-weight: 700;
}

/*  header content */
.header--content {
    flex-grow: 1;
}

.header--text {
    display: flex;
    flex-direction: column;
    justify-content: center;
}

.header--btn {
    width: 200px;
    height: 40px;
    background-color: var(--premeri-color);
    color: #fff;
    outline: none;
    border: none;
    margin-top: 20px;
}

.header--btn:hover {
    top: -5px;
    box-shadow: inset 8px 5px 15px #a2a7eb,
    inset -8px -8px 15px #bda1f4;
    box-shadow: 0 8px 15px rgba(0, 0, 0, 0.5);
    cursor: pointer;
}

.header--text h1 {
    font-size: 4rem;
    font-weight: 700;
    margin: 20px 0;
}

.header--text p {
    font-size: 1.6rem;
    font-style: var(--font-manrope);
}


/* heaer picture */
.header--picture {
    display: flex;
    justify-content: center;
}

.header--picture__size {
    position: relative;
    width: 330px;
    height: 476px;
    object-fit: cover;
    z-index: 2;
}

.picture--icon{
    position: relative;
}

.fa-play-circle {
    position: absolute;
    top: -45px;
    left: -45px;
    font-size: 9rem;
    z-index: 3;
}

.picture--background {
    position: absolute;
    top: 0;
    left: -70px;
    z-index: 0;
}
.header--picture-mark {
    position: absolute;
    top: 20%;
    right: -160px;
}
.picture--background__left {
    position: absolute;
    z-index: 1;
    top: 55px;
    left: -70px;
}

/* content */
.wrap--content {
}
.content--information {
    background-color: #111;
}
.informatin--about {
    display: flex;
}
.information--right {
    display: flex;
    flex-direction: column;
    align-items: center;    
    justify-content: center;
}
.content--information__text {
    /* width: 350px; */
    display: flex;
    flex-direction: column;
    justify-content: center;
    gap: 20px;
    padding-bottom: 50px;
}

.content--information__color {
    color: var(--premeri-color);
    font-size: 1.6rem;
}

.content--information__heading {
    font-size: 3rem;
    color: #fff;
}

.content--information__font {
    color: rgba(255, 255, 255, 0.5);
    font-size: 1.2rem;
}

.content--list {
    display: flex;
    gap: 20px;
}
.content--list li p:first-child {
    font-size: 2rem;
    color: #fff;
    margin-bottom: 10px;
}
.content--list li p:last-child {
    font-size: 1.5rem;
    color: rgba(255, 255, 255, 0.5);
}

.content--btn {
    margin-top: 50px;
    width: 150px;
    height: 50px;
    background-color: #fd6038;
    border: none;
    color: #fff;
    cursor: pointer;
}

/* content service */
.content--service {
    background-color: #fff;
    min-height: 100vh;
    padding-bottom: 100px;
}

.content--service--picture {
    margin: 0 100px;
    overflow: hidden;
}


.wrap--service {
    display: flex;
    gap: 20px;
    padding-bottom: 100px;
    overflow: hidden;
    flex-wrap: wrap;
}
.service--title {
    display: flex;
    flex-direction: column;
    gap: 15px;
    margin: 0 auto;
    padding: 50px 0;
    text-align: center;
    width: 400px;
}

.service--title__text {
    font-size: 1.5rem;
    color: rgba(0, 0, 0, 0.7)   ;
}

.service--title__size {
    font-size: 2rem;
}

.content-img {
    position: relative;
    margin: 0 auto;
}

.service--picture {
    position: relative;
    margin: 0 auto;
}

.area-picture {
    display: block;
    margin: 0 auto;
    width: 300px;
    height: 300px;
    object-fit: cover;
    object-position:center;
}

.service--picture__btn {
    position: absolute;
    width: 60%;
    height: 40px;
    background-color:#fff;
    color: #111;
    outline: none;
    border: none;
    bottom: 15px;
    left: 60px;
}

.service--picture__btn:hover {
    background-color: #fd6038;
    color: #fff;
}

.service-img {

}


.btn--service__all {
    display: block;
    margin: 0 auto;
    width: 150px;
    height: 40px;
    background-color: #fd6038;
    color: #fff;
    cursor: pointer;
    border: none;
}
.btn--service__all:hover {
    box-shadow: inset 8px 5px 15px #a2a7eb,
    inset -8px -8px 15px #bda1f4;
    box-shadow: 0 8px 15px rgba(0, 0, 0, 0.5);
}
/* future 1 */

.content--future__text {
    width: 350px;
}

.future-left {

}

.future-img {
    width: 500px;
    height: 350px;
    object-fit: cover;

}

.future--left {
    position: relative;
    overflow: hidden;
    object-fit: contain;
}

.future-mark {
    position: absolute;
    top: 140px;
    left: 0px;
}

.content--future__color {
    color:rgba(0, 0, 0, 0.5);
    font-size: 2rem;
}
.content--future__heading {
    font-size: 3rem;
    font-weight: 700;
    color: #111;
}

.content--future__font {
    font-size: 1.4rem;
    color: rgba(0, 0, 0, 0.5);
}

.content--future__text {
    display: flex;
    flex-direction: column;
    gap: 15px;
}

.content--future__text li {
    font-size: 1.3rem;
}

/* future 2 */

.future--second {
    flex-direction: row-reverse;
}

/* team */
.content--team {
    padding-bottom: 100px;
    background-color: #111;
}
.team--img {
    display: flex;
    flex-direction: column;
    text-align: center;
    gap: 15px   ;
}
.team__text {
    color:#fd6038;
    font-size: 1.4rem;
}

.team__size {
    font-size: 2rem;
    color: #fff;
}

.content--name {
    font-size: 2rem;
    margin-top: 20px;
    color: #fff;
}

.content--job {
    color: rgba(255, 255, 255, 0.7);
    font-size: 1.4rem;
}

.team__font {
    font-size: 1.4rem;
    color: rgba(255, 255, 255, 0.5);
}

.service-img:hover + .team-btn {
    background-color: #fd6038;
    color: #fff;
    visibility: visible;
}

.service-img:hover {
    border: 1px solid blue;
    }

.team-btn:hover {
    visibility: visible;
    background-color: #fd6038;
    color: #fff;
    transform: translateY(-5px);
}

.team-btn {
    visibility: hidden;
    outline: none;
    position: absolute;
    padding: 10px 20px;
    border: none;
    bottom: 25%;
    transition: transform 0.4s linear, background-color 0.4s linear, color 0.4s linear;
    left: 36%;
}




/* content deal */
.content--wrap--deal {
    display: flex;
    align-items: center;
    background-color: rgb(57, 134, 109);
    min-height: 400px;
    text-align: center;
}

.content--deal {
    display: flex;
    flex-direction: column;
    gap: 15px;
    width: 300px;
    margin: 0 auto;
}

.content--deal__tag {
    color: #fff;
    font-size: 1.6rem;
}

.content--deal__size {
    font-size: 3rem;
    color: #fffefe;
    font-weight: 700;
}

.content--deal__color {
    font-size: 1.4rem;
    color: rgba(255, 255, 255, 0.7);
}

.deal-btn {
    display: block;
    margin: 0 auto;
    background-color: var(--premeri-color);
    color: #fff;
    border: none;
    cursor: pointer;
    width: 200px;
    height: 30px;
}




/* footer */

.wrap--footer {
    background-color: #111;
    padding-bottom: 100px;
}
.footer-locatin {
    padding-top: 100px;
    border-bottom: 1px solid rgba(255, 255, 255, 0.5);
    display: flex;
    justify-content: center;
}

.locatin-list {
    display: flex;
    flex-direction: column;
    gap: 15px;
}

.locatin-list h1 {
    font-size: 2rem;
    color: #fff;
}
.locatin-list > li a {
    font-size: 1.4rem;
    color: rgba(255, 255, 255, 0.5);
}

iframe {
    height: 300px;
    margin-bottom: 50px;
}

.footer--copyright {
    width: 50px;
    margin-top: 50px;
    color: #fff;
    text-align: center;
    margin-bottom: 20px;
}

.footer--logo__bold {
    font-size: 2rem;
    font-weight: 700;
}
.footer-row {
    display: flex;
    align-items: end;
    justify-content: space-between;
}
.footer-icon {
    font-size: 4rem;
}

.footer-text {
    color: rgba(255, 255, 255, 0.5);
    font-size: 1.4rem;
}

.fab {
    color: var(--premeri-color);
    font-size: 4rem;
}

.footer-link {
    display: flex;
    gap: 10px;
}