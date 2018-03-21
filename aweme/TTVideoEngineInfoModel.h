//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString, TTVideoEngineURLInfoMap;

@interface TTVideoEngineInfoModel : NSObject
{
    _Bool _enableSSL;
    NSString *_videoID;
    NSString *_userID;
    TTVideoEngineURLInfoMap *_videoURLInfoMap;
    NSNumber *_videoDuration;
    NSString *_autoDefinition;
    long long _videoStatusCode;
    NSString *_validate;
}

@property(nonatomic) _Bool enableSSL; // @synthesize enableSSL=_enableSSL;
@property(copy, nonatomic) NSString *validate; // @synthesize validate=_validate;
@property(nonatomic) long long videoStatusCode; // @synthesize videoStatusCode=_videoStatusCode;
@property(copy, nonatomic) NSString *autoDefinition; // @synthesize autoDefinition=_autoDefinition;
@property(retain, nonatomic) NSNumber *videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) TTVideoEngineURLInfoMap *videoURLInfoMap; // @synthesize videoURLInfoMap=_videoURLInfoMap;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
- (void).cxx_destruct;
- (id)videoInfoForType:(unsigned long long)arg1;
- (long long)playLoadMinStepForType:(unsigned long long)arg1;
- (long long)playLoadMaxStepForType:(unsigned long long)arg1;
- (long long)preloadSizeForType:(unsigned long long)arg1;
- (id)definitionStrForType:(unsigned long long)arg1;
- (long long)videoSizeForType:(unsigned long long)arg1;
- (id)allURLWithDefinition:(unsigned long long)arg1 transformedURL:(_Bool)arg2;
- (id)initWithDictionary:(id)arg1;

@end

