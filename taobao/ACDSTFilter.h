//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface ACDSTFilter : NSObject
{
    NSString *_key;
    NSObject *_value;
    unsigned long long _type;
    long long _logicTypeWithParent;
    NSMutableArray *_subFilters;
}

@property(retain, nonatomic) NSMutableArray *subFilters; // @synthesize subFilters=_subFilters;
@property(nonatomic) long long logicTypeWithParent; // @synthesize logicTypeWithParent=_logicTypeWithParent;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSObject *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)logicLink:(id)arg1 withType:(unsigned long long)arg2;
- (id)tor:(id)arg1;
- (id)tand:(id)arg1;
- (id)operation:(unsigned long long)arg1 withValue:(id)arg2;
- (id)lessEqual:(id)arg1;
- (id)lessThan:(id)arg1;
- (id)greaterEqual:(id)arg1;
- (id)greaterThan:(id)arg1;
- (id)notEqual:(id)arg1;
- (id)equal:(id)arg1;
- (id)init:(id)arg1;

@end

