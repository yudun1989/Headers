//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class QQMoreOptionTableViewCell;

@interface leftSwipScrollView : UIScrollView
{
    struct CGPoint _originalLocation;
    _Bool _isEnableLeftSwip;
    QQMoreOptionTableViewCell *_parentCell;
}

@property(nonatomic) QQMoreOptionTableViewCell *parentCell; // @synthesize parentCell=_parentCell;
@property(nonatomic) _Bool isEnableLeftSwip; // @synthesize isEnableLeftSwip=_isEnableLeftSwip;
- (void)onTap;
- (void)cancelTap;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

