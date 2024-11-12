import './Hero.css'
import arrow_btn from '../../assets/arrow_btn.png'
import play_icon from '../../assets/play_icon.png'
import pause_icon from '../../assets/pause_icon.png'
import image3 from '../../assets/image3.png';
const Hero = ({ heroData, setHeroCount, heroCount, setPlayStatus, playStatus }) => {
  return (
    <div className='hero'>
      <div className="hero-text">
        <p>{heroData.text1}</p>
        <p>{heroData.text2}</p>
      </div>

      <div className="hero-dot-play">
        <div className="hero-explore">
          <p>Explore More Courses</p>
          <a href="https://www.facebook.com/login.php/"><img src={arrow_btn} alt=" " /></a>
        </div>
        <div>
          <ul className="hero-dots">
            <li onClick={() => setHeroCount(0)} className={heroCount === 0 ? "hero-dot orange" : "hero-dot"}></li>
            <li onClick={() => setHeroCount(1)} className={heroCount === 1 ? "hero-dot orange" : "hero-dot"}></li>
            <li onClick={() => setHeroCount(2)} className={heroCount === 2 ? "hero-dot orange" : "hero-dot"}></li>
          </ul>
        </div>
        <div className="hero-play">
          <img onClick={() => setPlayStatus(!playStatus)} src={playStatus ? pause_icon : play_icon} alt="" />
          <p>See the video</p>
        </div>
      </div>
      <h1 className='name-courses'>Popular Courses Now</h1>
      <div className="Courses">
        <div className="div">
          <img src={image3} alt="" />
          <div class="overlay">
            <h1>Title</h1>
            <p>Lorem ipsum dolor, sit amet consectetur adipisicing elit. Dolor accusamus fugit nisi</p>
            <div class="stars">
              <i class="fas fa-star"></i>
              <i class="fas fa-star"></i>
              <i class="fas fa-star"></i>
              <i class="fas fa-star"></i>
              <i class="fas fa-star-half-alt"></i>
            </div>
            <button>View Course</button>
          </div>
        </div>

        <div className="div">
          <img src={image3} alt="" />
          <div class="overlay">
            <h1>Title</h1>
            <p>Lorem ipsum dolor, sit amet consectetur adipisicing elit. Dolor accusamus fugit nisi</p>
            <div class="stars">
              <i class="fas fa-star"></i>
              <i class="fas fa-star"></i>
              <i class="fas fa-star"></i>
              <i class="fas fa-star"></i>
              <i class="fas fa-star-half-alt"></i>
            </div>
            <button>View Course</button>
          </div>
        </div>
        <div className="div">
          <img src={image3} alt="" />
          <div class="overlay">
            <h1>Title</h1>
            <p>Lorem ipsum dolor, sit amet consectetur adipisicing elit. Dolor accusamus fugit nisi</p>
            <div class="stars">
              <i class="fas fa-star"></i>
              <i class="fas fa-star"></i>
              <i class="fas fa-star"></i>
              <i class="fas fa-star"></i>
              <i class="fas fa-star-half-alt"></i>
            </div>
            <button>View Course</button>
          </div>
        </div>
        <div className="div">
          <img src={image3} alt="" />
          <div class="overlay">
            <h1>Title</h1>
            <p>Lorem ipsum dolor, sit amet consectetur adipisicing elit. Dolor accusamus fugit nisi</p>
            <div class="stars">
              <i class="fas fa-star"></i>
              <i class="fas fa-star"></i>
              <i class="fas fa-star"></i>
              <i class="fas fa-star"></i>
              <i class="fas fa-star-half-alt"></i>
            </div>
            <button>View Course</button>
          </div>
        </div>
        <div className="div">
          <img src={image3} alt="" />
          <div class="overlay">
            <h1>Title</h1>
            <p>Lorem ipsum dolor, sit amet consectetur adipisicing elit. Dolor accusamus fugit nisi</p>
            <div class="stars">
              <i class="fas fa-star"></i>
              <i class="fas fa-star"></i>
              <i class="fas fa-star"></i>
              <i class="fas fa-star"></i>
              <i class="fas fa-star-half-alt"></i>
            </div>
            <button>View Course</button>
          </div>
        </div>
        <div className="div">
          <img src={image3} alt="" />
          <div class="overlay">
            <h1>Title</h1>
            <p>Lorem ipsum dolor, sit amet consectetur adipisicing elit. Dolor accusamus fugit nisi</p>
            <div class="stars">
              <i class="fas fa-star"></i>
              <i class="fas fa-star"></i>
              <i class="fas fa-star"></i>
              <i class="fas fa-star"></i>
              <i class="fas fa-star-half-alt"></i>
            </div>
            <button>View Course</button>
          </div>
        </div>
        <div className="div">
          <img src={image3} alt="" />
          <div class="overlay">
            <h1>Title</h1>
            <p>Lorem ipsum dolor, sit amet consectetur adipisicing elit. Dolor accusamus fugit nisi</p>
            <div class="stars">
              <i class="fas fa-star"></i>
              <i class="fas fa-star"></i>
              <i class="fas fa-star"></i>
              <i class="fas fa-star"></i>
              <i class="fas fa-star-half-alt"></i>
            </div>
            <button>View Course</button>
          </div>
        </div>
        <div className="div">
          <img src={image3} alt="" />
          <div class="overlay">
            <h1>Title</h1>
            <p>Lorem ipsum dolor, sit amet consectetur adipisicing elit. Dolor accusamus fugit nisi</p>
            <div class="stars">
              <i class="fas fa-star"></i>
              <i class="fas fa-star"></i>
              <i class="fas fa-star"></i>
              <i class="fas fa-star"></i>
              <i class="fas fa-star-half-alt"></i>
            </div>
            <a href="http://">
              <button>View Course</button>
            </a>
          </div>
        </div>
        <div className='button-flex'>
          <button>More Courses<img src={arrow_btn} alt=" " /></button>
        </div>

      </div>
      <div className="course-status">
        <div className="status1">
          <img src="" alt="" />
          <div className="overlay">
            <h1>Running Courses</h1>
            <h1>100+</h1>
           <p>We provide more than 100 courses </p>
          </div>
        </div>
        <div className="status1"></div>
        <div className="status1"></div>
      </div>


    </div>

  )
}

export default Hero
