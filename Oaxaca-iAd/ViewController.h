//
//  ViewController.h
//  Oaxaca-iAd
//
//  Created by felipe on 07/02/15.
//  Copyright (c) 2015 felipe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <iAd/iAd.h>
@interface ViewController : UIViewController<UIApplicationDelegate,ADBannerViewDelegate>
{
    ADBannerView *adView;
    BOOL bannerIsVisible;
}
@end

