//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache;

@interface SpriteMessageParser : NSObject
{
    NSCache *_cache;
}

+ (id)sharedParser;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
- (void)parseActionsFromTextModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)parseActionsFromTextModel:(id)arg1;
- (id)parseCmEmojiIdFromAioModel:(id)arg1;
- (id)parseKeywordsActionIDsFromText:(id)arg1;
- (id)p_getKeywordsMap2ActionModels;
- (id)loadActionsKeyboards:(CDUnknownBlockType)arg1;
- (void)clearCache;
- (id)parseActionsFromText:(id)arg1 foundHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

