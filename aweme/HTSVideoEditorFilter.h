//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface HTSVideoEditorFilter : NSObject
{
    unsigned long long _filterType;
    NSString *_name;
}

+ (id)filterWithName:(id)arg1 filterType:(unsigned long long)arg2;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long filterType; // @synthesize filterType=_filterType;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 filterType:(unsigned long long)arg2;

@end

