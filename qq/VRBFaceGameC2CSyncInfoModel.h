//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/VRBFaceGameBaseModel.h>

@class NSString;

@interface VRBFaceGameC2CSyncInfoModel : VRBFaceGameBaseModel
{
    int _subType;
    int _faceGameState;
    int _exceptiontype;
    int _fromWho;
    int _musicId;
    int _resultCode;
    int _scores;
    int _enterType;
    int _maxScore;
    int _totalEmojiNum;
    NSString *_faceGameKey;
    NSString *_money;
    NSString *_resultState;
}

@property(nonatomic) int totalEmojiNum; // @synthesize totalEmojiNum=_totalEmojiNum;
@property(nonatomic) int maxScore; // @synthesize maxScore=_maxScore;
@property(nonatomic) int enterType; // @synthesize enterType=_enterType;
@property(nonatomic) int scores; // @synthesize scores=_scores;
@property(retain, nonatomic) NSString *resultState; // @synthesize resultState=_resultState;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
@property(retain, nonatomic) NSString *money; // @synthesize money=_money;
@property(nonatomic) int musicId; // @synthesize musicId=_musicId;
@property(nonatomic) int fromWho; // @synthesize fromWho=_fromWho;
@property(nonatomic) int exceptiontype; // @synthesize exceptiontype=_exceptiontype;
@property(nonatomic) int faceGameState; // @synthesize faceGameState=_faceGameState;
@property(retain, nonatomic) NSString *faceGameKey; // @synthesize faceGameKey=_faceGameKey;
@property(nonatomic) int subType; // @synthesize subType=_subType;
- (void).cxx_destruct;
- (id)description;

@end

