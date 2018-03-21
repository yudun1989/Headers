//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class APActivityIndicatorView, NSString, UIColor;

@interface GO2OClaimmButton : UIButton
{
    NSString *_titleText;
    APActivityIndicatorView *_activityView;
    UIColor *_loadingColor;
}

@property(retain, nonatomic) UIColor *loadingColor; // @synthesize loadingColor=_loadingColor;
@property(retain, nonatomic) APActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;
- (id)init;

@end

