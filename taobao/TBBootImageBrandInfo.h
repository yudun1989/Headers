//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBBootImageBrandInfo : TBJSONModel
{
    NSString *_bidid;
    NSString *_feedid;
    NSString *_ifs;
}

+ (id)brandInfoWithDictFromServer:(id)arg1;
@property(copy, nonatomic) NSString *ifs; // @synthesize ifs=_ifs;
@property(copy, nonatomic) NSString *feedid; // @synthesize feedid=_feedid;
@property(copy, nonatomic) NSString *bidid; // @synthesize bidid=_bidid;
- (void).cxx_destruct;

@end

