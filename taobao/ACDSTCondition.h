//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface ACDSTCondition : NSObject
{
    NSString *_parentKey;
    NSString *_childKey;
    NSMutableArray *_subConditions;
}

@property(retain, nonatomic) NSMutableArray *subConditions; // @synthesize subConditions=_subConditions;
@property(retain, nonatomic) NSString *childKey; // @synthesize childKey=_childKey;
@property(retain, nonatomic) NSString *parentKey; // @synthesize parentKey=_parentKey;
- (void).cxx_destruct;
- (id)tand:(id)arg1;
- (id)initWithParent:(id)arg1 withChild:(id)arg2;

@end

