//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;
@protocol AWSPopupBtnDelegate;

@interface AWSPopupView : UIView
{
    UIView *_contentView;
    NSMutableArray *_splites;
    NSMutableArray *_buttons;
    long long _arrowDirection;
    id <AWSPopupBtnDelegate> _delegate;
    UIView *_arrowView;
}

@property(retain, nonatomic) UIView *arrowView; // @synthesize arrowView=_arrowView;
@property(nonatomic) __weak id <AWSPopupBtnDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (_Bool)buildBtns;
- (_Bool)reloadData;
- (id)init;

@end
