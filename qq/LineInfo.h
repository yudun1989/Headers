//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface LineInfo : NSObject
{
    unsigned int _u32LineId;
    unsigned int _u32TemplateId;
    unsigned int _u32RGBA;
    unsigned int _u32Time;
    NSMutableArray *_arrPoint;
}

@property(retain, nonatomic) NSMutableArray *arrPoint; // @synthesize arrPoint=_arrPoint;
@property(nonatomic) unsigned int u32Time; // @synthesize u32Time=_u32Time;
@property(nonatomic) unsigned int u32RGBA; // @synthesize u32RGBA=_u32RGBA;
@property(nonatomic) unsigned int u32TemplateId; // @synthesize u32TemplateId=_u32TemplateId;
@property(nonatomic) unsigned int u32LineId; // @synthesize u32LineId=_u32LineId;
- (void)dealloc;
- (id)init;

@end

