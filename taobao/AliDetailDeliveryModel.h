//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSDictionary, NSString;

@interface AliDetailDeliveryModel : TBJSONModel
{
    _Bool _areaSell;
    _Bool _showAreaChooser;
    NSString *_from;
    NSString *_to;
    NSString *_completedTo;
    NSString *_postage;
    NSString *_areaId;
    NSDictionary *_extras;
}

@property(retain, nonatomic) NSDictionary *extras; // @synthesize extras=_extras;
@property(nonatomic) _Bool showAreaChooser; // @synthesize showAreaChooser=_showAreaChooser;
@property(nonatomic) _Bool areaSell; // @synthesize areaSell=_areaSell;
@property(copy, nonatomic) NSString *areaId; // @synthesize areaId=_areaId;
@property(copy, nonatomic) NSString *postage; // @synthesize postage=_postage;
@property(copy, nonatomic) NSString *completedTo; // @synthesize completedTo=_completedTo;
@property(copy, nonatomic) NSString *to; // @synthesize to=_to;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
- (void).cxx_destruct;

@end

