//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface AliDetailSkuImgManager : NSObject
{
    _Bool _isPicPropsSelected;
    NSMutableDictionary *_picMap;
    NSString *_propId;
    NSString *_defaultPic;
    NSString *_selectPic;
}

@property(nonatomic) _Bool isPicPropsSelected; // @synthesize isPicPropsSelected=_isPicPropsSelected;
@property(retain, nonatomic) NSString *selectPic; // @synthesize selectPic=_selectPic;
@property(retain, nonatomic) NSString *defaultPic; // @synthesize defaultPic=_defaultPic;
@property(retain, nonatomic) NSString *propId; // @synthesize propId=_propId;
@property(retain, nonatomic) NSMutableDictionary *picMap; // @synthesize picMap=_picMap;
- (void).cxx_destruct;
- (void)getSkuPicUnSelected:(id)arg1;
- (void)getSkuPicSelected:(id)arg1;
- (id)getPicSkuProps:(id)arg1;
- (void)setDefault:(id)arg1;
- (id)initWithDetailResult:(id)arg1;
- (void)resetTBDetailModel:(id)arg1;

@end

