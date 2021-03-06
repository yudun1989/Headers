//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@interface JSONModel (Monitor)
+ (void)trackErrorWithClassName:(id)arg1 cmdName:(id)arg2 errorDictionary:(id)arg3;
+ (id)dictionaryOfJSONModelError:(id)arg1;
+ (id)dictionaryOfJSONModelException:(id)arg1;
+ (id)arrayOfModelsFromData_swizzled:(id)arg1 error:(id *)arg2;
+ (id)arrayOfModelsFromDictionaries_swizzled:(id)arg1 error:(id *)arg2;
+ (void)load;
- (id)initWithData_swizzled:(id)arg1 error:(id *)arg2;
- (id)initWithDictionary_swizzled:(id)arg1 error:(id *)arg2;
- (id)initWithString_swizzled:(id)arg1 usingEncoding:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithString_swizzled:(id)arg1 error:(id *)arg2;
@end

