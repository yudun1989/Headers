//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class WeAppViewModuleManager;

@interface WeAppComponentBaseItem : NSObject <NSCoding>
{
    WeAppViewModuleManager *_moduleManager;
}

+ (id)modelArrayWithJSON:(id)arg1 withModuleManager:(id)arg2;
+ (id)modelArrayWithJSON:(id)arg1;
+ (id)modelWithJSON:(id)arg1 withModuleManager:(id)arg2;
+ (id)modelWithJSON:(id)arg1;
+ (id)model;
+ (id)change:(id)arg1 intoClass:(Class)arg2;
@property(nonatomic) __weak WeAppViewModuleManager *moduleManager; // @synthesize moduleManager=_moduleManager;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)keys;
- (Class)classForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setFromDictionary:(id)arg1;
- (id)keyMapDictionary;
- (id)parseModule:(id)arg1;
- (void)setup;
- (id)initWithDictionary:(id)arg1 withModuleManager:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

