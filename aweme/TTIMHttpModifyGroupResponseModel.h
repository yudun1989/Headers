//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSString;
@protocol TTIMHttpGroupModel><Optional;

@interface TTIMHttpModifyGroupResponseModel : JSONModel
{
    NSString *_message;
    NSArray<TTIMHttpGroupModel><Optional> *_data;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSArray<TTIMHttpGroupModel><Optional> *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)transformToPBModel;

@end

