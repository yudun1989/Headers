//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface QQJSImageCacheManager : NSObject
{
    NSMutableDictionary *_imageCacheDictionary;
}

+ (id)instance;
@property(retain, nonatomic) NSMutableDictionary *imageCacheDictionary; // @synthesize imageCacheDictionary=_imageCacheDictionary;
- (id)getItemWithKey:(id)arg1;
- (void)addItemWithKey:(id)arg1 andValue:(id)arg2;
- (void)dealloc;
- (id)init;

@end

