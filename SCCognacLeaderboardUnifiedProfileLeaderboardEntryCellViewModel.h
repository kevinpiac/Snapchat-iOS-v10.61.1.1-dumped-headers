//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCAvatarViewModel;

@interface SCCognacLeaderboardUnifiedProfileLeaderboardEntryCellViewModel : NSObject <NSCopying>
{
    NSString *_name;
    long long _score;
    long long _scoreDecimalOffset;
    long long _scoreRank;
    SCAvatarViewModel *_avatarViewModel;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCAvatarViewModel *avatarViewModel; // @synthesize avatarViewModel=_avatarViewModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 score:(long long)arg2 scoreDecimalOffset:(long long)arg3 scoreRank:(long long)arg4 avatarViewModel:(id)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) long long score; // @synthesize score=_score;
@property(readonly, nonatomic) long long scoreDecimalOffset; // @synthesize scoreDecimalOffset=_scoreDecimalOffset;
@property(readonly, nonatomic) long long scoreRank; // @synthesize scoreRank=_scoreRank;

@end

