//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ALCHomeResultPB, ALCZmScoreVOPB, NSMutableDictionary;

@interface ALCCommon : NSObject
{
    ALCZmScoreVOPB *_score;
    ALCHomeResultPB *_attributeResult;
    NSMutableDictionary *_objDic;
}

+ (id)getGradientColorWith:(id)arg1;
+ (void)initialColorArray;
+ (id)getRadarColorArray;
+ (int)getSectionWithScore:(int)arg1;
+ (id)launchOptionsFormURL:(id)arg1;
+ (struct CGSize)boundingRectWithSize:(struct CGSize)arg1 font:(id)arg2 str:(id)arg3;
+ (id)createCommonButton:(struct CGRect)arg1 title:(id)arg2 titleColor:(id)arg3 bgColor:(id)arg4 target:(id)arg5 action:(SEL)arg6 bolderColor:(id)arg7 highLightedBackgroundColor:(id)arg8;
+ (id)createCommonButton:(struct CGRect)arg1 title:(id)arg2 bgColor:(id)arg3 target:(id)arg4 action:(SEL)arg5;
+ (id)imageNamed:(id)arg1 bundleName:(id)arg2;
+ (id)scaleToSize:(struct CGSize)arg1 image:(id)arg2;
+ (id)getImageFromColor:(id)arg1;
+ (id)imageWithView:(id)arg1;
+ (id)imageNamed:(id)arg1;
+ (id)normalLabelWith:(id)arg1 textColor:(id)arg2 font:(id)arg3;
+ (id)fitLabelWith:(id)arg1 textColor:(id)arg2 font:(id)arg3;
+ (id)fitLabelWith:(id)arg1 textColorRGB:(int)arg2 fontSize:(double)arg3;
+ (id)colorWithHexString:(id)arg1;
+ (double)colorComponentFrom:(id)arg1 start:(unsigned long long)arg2 length:(unsigned long long)arg3;
+ (id)getImageLabelConfig;
+ (id)getNativePageList;
+ (double)calculateScreenScale;
+ (id)redDotView;
+ (long long)getCardTypeWithCertType:(id)arg1;
+ (id)parseJsonString:(id)arg1;
+ (_Bool)isValidUrl:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *objDic; // @synthesize objDic=_objDic;
@property(nonatomic) __weak ALCHomeResultPB *attributeResult; // @synthesize attributeResult=_attributeResult;
@property(nonatomic) __weak ALCZmScoreVOPB *score; // @synthesize score=_score;
- (void).cxx_destruct;
- (void)dealloc;

@end

