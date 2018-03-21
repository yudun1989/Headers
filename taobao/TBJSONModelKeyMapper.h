//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TBJSONModelKeyMapper : NSObject
{
    NSMutableDictionary *_jsonToModelMap;
    NSMutableDictionary *_modelToJsonMap;
}

@property(retain, nonatomic) NSMutableDictionary *modelToJsonMap; // @synthesize modelToJsonMap=_modelToJsonMap;
@property(retain, nonatomic) NSMutableDictionary *jsonToModelMap; // @synthesize jsonToModelMap=_jsonToModelMap;
- (void).cxx_destruct;
- (id)jsonKeyMappedFromModelKey:(id)arg1;
- (id)modelKeyMappedFromJsonKey:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

