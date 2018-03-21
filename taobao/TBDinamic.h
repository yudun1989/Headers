//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBDinamic : NSObject
{
}

+ (void)registerLogger:(id)arg1;
+ (void)registerEventHandler:(id)arg1 forIdentifier:(id)arg2;
+ (void)registerDataParser:(id)arg1 forPrefix:(id)arg2;
+ (void)registerViewConstructor:(id)arg1 forIdentifier:(id)arg2;
+ (void)downloadTemplatesWithTemplateItems:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)downloadTemplateWithTemplateItem:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)fetchExactTemplateForTemplateItem:(id)arg1;
+ (struct CGSize)estimatedViewSizeWithExactTemplate:(id)arg1 data:(id)arg2 context:(id)arg3 error:(id *)arg4;
+ (struct CGSize)estimatedViewSizeWithExactTemplate:(id)arg1 dataDict:(id)arg2;
+ (id)generateViewItemWithExactTemplate:(id)arg1 data:(id)arg2 context:(id)arg3 error:(id *)arg4;
+ (id)generateViewItemWithExactTemplate:(id)arg1 dataDict:(id)arg2;

@end

