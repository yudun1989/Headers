//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, UIColor, UIFont;

@interface UITextView (TTLPlaceHolder)
- (void)ttl_syncTextAlignmentWithPlaceHoler;
- (void)ttl_syncFontWithPlaceHolderFont;
- (void)ttl_showOrHidePlaceHolderTextView;
- (void)setTtl_isCustomPlaceHolderFont:(_Bool)arg1;
- (void)setTtl_placeHolderTextView:(id)arg1;
@property(nonatomic) struct UIEdgeInsets ttl_placeHolderEdgeInsets;
@property(retain, nonatomic) UIFont *ttl_placeHolderFont;
@property(retain, nonatomic) UIColor *ttl_placeHolderColor;
@property(retain, nonatomic) NSString *ttl_placeHolder;
- (_Bool)ttl_isCustomPlaceHolderFont;
- (id)ttl_placeHolderTextView;
@end

