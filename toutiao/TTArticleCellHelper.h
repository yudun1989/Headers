//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TTArticleCellHelper : NSObject
{
}

+ (double)padding:(double)arg1;
+ (double)lineHeight:(double)arg1;
+ (double)deviceChangeSize:(double)arg1;
+ (double)settingSize:(double)arg1;
+ (double)fontSize:(double)arg1;
+ (double)mutableFontSize:(double)arg1;
+ (struct CGSize)getADActionSize:(double)arg1;
+ (struct CGSize)getInfoSize:(double)arg1;
+ (struct CGSize)resizableSquareMultiPicsSize:(double)arg1;
+ (struct CGSize)resizablePicSize:(double)arg1;
+ (struct CGSize)getLoopPicSizeWithOrderData:(id)arg1 WithContainWidth:(double)arg2 WithPicPadding:(double)arg3 WithEdgePadding:(double)arg4;
+ (struct CGSize)getPicSizeByOrderedData:(id)arg1 adModel:(id)arg2 picStyle:(long long)arg3 width:(double)arg4;
+ (struct CGSize)getPicSizeByOrderedData:(id)arg1 picStyle:(long long)arg2 width:(double)arg3;
+ (_Bool)shouldDisplayCommentView:(id)arg1 listType:(unsigned long long)arg2;
+ (struct CGSize)getCommentSize:(id)arg1 width:(double)arg2;
+ (struct CGSize)getCommentSize:(id)arg1 width:(double)arg2 numberOfLines:(long long)arg3;
+ (_Bool)shouldDisplayAbstractView:(id)arg1 listType:(unsigned long long)arg2;
+ (_Bool)shouldDisplayAbstractView:(id)arg1 listType:(unsigned long long)arg2 mustShow:(_Bool)arg3;
+ (struct CGSize)getAbstractSize:(id)arg1 width:(double)arg2;
+ (struct CGSize)getAbstractSize:(id)arg1 width:(double)arg2 numberOfLines:(long long)arg3;
+ (struct CGSize)getTitleSize:(id)arg1 width:(double)arg2 numberOfLines:(long long)arg3;
+ (struct CGSize)getTitleSize:(id)arg1 width:(double)arg2;
+ (struct CGSize)getTitleSize:(id)arg1 width:(double)arg2 fontSize:(double)arg3 lineHeight:(double)arg4 isBold:(_Bool)arg5 numberOfLines:(long long)arg6 firstLineIndent:(double)arg7;
+ (struct CGSize)getFunctionSize:(id)arg1 width:(double)arg2;
+ (id)shareHelper;

@end

