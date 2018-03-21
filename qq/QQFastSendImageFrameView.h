//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QQAsset, UIButton, UIImage, UIImageView;
@protocol QQFastSendImageDelegate;

@interface QQFastSendImageFrameView : UIView
{
    QQAsset *_asset;
    id <QQFastSendImageDelegate> _myDelegate;
    UIImageView *_imgView;
    UIImage *_bgImage;
    UIButton *_bgButton;
}

@property(nonatomic) id <QQFastSendImageDelegate> myDelegate; // @synthesize myDelegate=_myDelegate;
- (void)handleTapGesture;
- (_Bool)isSupportRightDragToGoBack;
- (void)dealoc;
- (id)initWithFrame:(struct CGRect)arg1 andAsset:(id)arg2;

@end

