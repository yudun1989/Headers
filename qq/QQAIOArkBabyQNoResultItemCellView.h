//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UILabel;
@protocol QQAIOArkBabyQNoResultDelegate;

@interface QQAIOArkBabyQNoResultItemCellView : UIView
{
    UILabel *_tipLabel;
    NSString *_itemTips;
    id <QQAIOArkBabyQNoResultDelegate> _delegate;
    UIColor *_selColor;
}

@property(copy, nonatomic) UIColor *selColor; // @synthesize selColor=_selColor;
@property(nonatomic) id <QQAIOArkBabyQNoResultDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *itemTips; // @synthesize itemTips=_itemTips;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

