//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TlibDy/LKLayoutItem.h>

@interface QZHeadThumbItem : LKLayoutItem
{
    _Bool _fitQQFontSize;
    unsigned long long _uin;
}

@property(nonatomic) _Bool fitQQFontSize; // @synthesize fitQQFontSize=_fitQQFontSize;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
- (id)userInteractParameter;
- (void)configView:(id)arg1 context:(id)arg2;
- (void)updateView:(id)arg1 context:(id)arg2;
- (struct CGSize)computeSizeWithStraintSize:(struct CGSize)arg1;
- (id)createView;

@end

