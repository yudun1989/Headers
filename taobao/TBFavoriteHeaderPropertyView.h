//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString;
@protocol TBFavoriteHeaderPropertyViewDelegate;

@interface TBFavoriteHeaderPropertyView : UIView
{
    NSString *_bigSaleIcon;
    id <TBFavoriteHeaderPropertyViewDelegate> _delegate;
    UIView *_propertyButtonContanerView;
    unsigned long long _currentSelectedIndex;
    NSMutableArray *_propertyButtonArray;
}

@property(retain, nonatomic) NSMutableArray *propertyButtonArray; // @synthesize propertyButtonArray=_propertyButtonArray;
@property(nonatomic) unsigned long long currentSelectedIndex; // @synthesize currentSelectedIndex=_currentSelectedIndex;
@property(retain, nonatomic) UIView *propertyButtonContanerView; // @synthesize propertyButtonContanerView=_propertyButtonContanerView;
@property(nonatomic) __weak id <TBFavoriteHeaderPropertyViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *bigSaleIcon; // @synthesize bigSaleIcon=_bigSaleIcon;
- (void).cxx_destruct;
- (void)propertyButtonClicked:(id)arg1;
- (void)configSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

