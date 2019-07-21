//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSString, SCFriendsFeedPaginationMetadata, SCFriendsFeedSyncMetadata;

@interface SCFriendsFeedUFSV2MetadataChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    NSString *_userId;
    SCFriendsFeedSyncMetadata *_syncMetadata;
    SCFriendsFeedPaginationMetadata *_paginationMetadata;
}

+ (id)changeRequestForFriendsFeedUFSV2Metadata:(id)arg1;
+ (id)creationRequestWithFriendsFeedUFSV2Metadata:(id)arg1;
+ (id)deletionRequestForFriendsFeedUFSV2Metadata:(id)arg1;
- (void).cxx_destruct;
- (id)_friendsFeedUFSV2Metadata;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (id)initWithRowid:(long long)arg1 userId:(id)arg2 syncMetadata:(id)arg3 paginationMetadata:(id)arg4;
@property(copy, nonatomic) SCFriendsFeedPaginationMetadata *paginationMetadata; // @synthesize paginationMetadata=_paginationMetadata;
@property(copy, nonatomic) SCFriendsFeedSyncMetadata *syncMetadata; // @synthesize syncMetadata=_syncMetadata;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (const char *)table;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
