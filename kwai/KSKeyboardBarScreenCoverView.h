//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol KSKeyboardBarScreenCoverViewDelegate;

@interface KSKeyboardBarScreenCoverView : UIView
{
    id <KSKeyboardBarScreenCoverViewDelegate> _delegate;
    struct CGPoint _startPoint;
}

@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(nonatomic) __weak id <KSKeyboardBarScreenCoverViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didPan:(id)arg1;
- (void)didTapKeyboardBarScreenCover;
- (void)setHidden:(_Bool)arg1;
- (id)initWithControllerView:(id)arg1;

@end

