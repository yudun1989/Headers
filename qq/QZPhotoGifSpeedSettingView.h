//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UISlider;
@protocol QZPhotoGifSpeedSettingViewDelegate;

@interface QZPhotoGifSpeedSettingView : UIView
{
    int _xo;
    UISlider *_gifSlider;
    UIView *_operationView;
    UIView *_blankView;
    id <QZPhotoGifSpeedSettingViewDelegate> _delegate;
}

@property(nonatomic) __weak id <QZPhotoGifSpeedSettingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) UIView *blankView; // @dynamic blankView;
@property(retain, nonatomic) UISlider *gifSlider; // @dynamic gifSlider;
@property(retain, nonatomic) UIView *operationView; // @dynamic operationView;

@end

