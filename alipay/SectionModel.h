//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SectionModel : NSObject
{
    NSString *_sectionId;
    NSString *_title;
    NSArray *_modelArray;
}

@property(retain, nonatomic) NSArray *modelArray; // @synthesize modelArray=_modelArray;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *sectionId; // @synthesize sectionId=_sectionId;
- (void).cxx_destruct;
- (id)dataModelAtIndex:(long long)arg1;
- (long long)rowCount;

@end
