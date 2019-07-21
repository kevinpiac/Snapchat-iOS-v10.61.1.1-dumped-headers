//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSString;

@interface SCSnapchattersFriendScoreChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    NSString *_userId;
    long long _score;
    double _lastFetchedTimestamp;
}

+ (id)changeRequestForSnapchattersFriendScore:(id)arg1;
+ (id)creationRequestWithSnapchattersFriendScore:(id)arg1;
+ (id)deletionRequestForSnapchattersFriendScore:(id)arg1;
- (void).cxx_destruct;
- (id)_snapchattersFriendScore;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (id)initWithRowid:(long long)arg1 userId:(id)arg2 score:(long long)arg3 lastFetchedTimestamp:(double)arg4;
@property(nonatomic) double lastFetchedTimestamp; // @synthesize lastFetchedTimestamp=_lastFetchedTimestamp;
@property(nonatomic) long long score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (const char *)table;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

