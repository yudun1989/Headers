//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TSVPropertySynchronizationMediator : NSObject
{
    NSMutableDictionary *_dictionary;
}

+ (id)sharedMediator;
@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
- (void)syncPropertyForObject:(id)arg1 keyPath:(id)arg2 entityKey:(id)arg3 fieldKey:(id)arg4;
- (void)syncPropertyForObject:(id)arg1 keyPath:(id)arg2 entityKey:(id)arg3;
- (id)init;

@end

