//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCCognacAppDataModel, SCCognacLeaderboard;

@interface SCCognacLeaderboardUnifiedProfileLeaderboardInfoSectionDataModel : NSObject <NSCopying>
{
    SCCognacAppDataModel *_appDataModel;
    SCCognacLeaderboard *_leaderboard;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCCognacAppDataModel *appDataModel; // @synthesize appDataModel=_appDataModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithAppDataModel:(id)arg1 leaderboard:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCCognacLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;

@end

