//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIView;

@interface TSVVolumeViewController : UIViewController
{
    _Bool _onScreen;
    double _volume;
    UIView *_volumeIndicatorView;
    UIView *_currentVolumeView;
}

@property(nonatomic) _Bool onScreen; // @synthesize onScreen=_onScreen;
@property(retain, nonatomic) UIView *currentVolumeView; // @synthesize currentVolumeView=_currentVolumeView;
@property(retain, nonatomic) UIView *volumeIndicatorView; // @synthesize volumeIndicatorView=_volumeIndicatorView;
@property(nonatomic) double volume; // @synthesize volume=_volume;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

@end

