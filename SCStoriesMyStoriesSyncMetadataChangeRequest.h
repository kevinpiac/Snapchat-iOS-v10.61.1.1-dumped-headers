//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSData, NSString;

@interface SCStoriesMyStoriesSyncMetadataChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    NSString *_userId;
    NSData *_token;
}

+ (id)changeRequestForStoriesMyStoriesSyncMetadata:(id)arg1;
+ (id)creationRequestWithStoriesMyStoriesSyncMetadata:(id)arg1;
+ (id)deletionRequestForStoriesMyStoriesSyncMetadata:(id)arg1;
- (void).cxx_destruct;
- (id)_storiesMyStoriesSyncMetadata;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (id)initWithRowid:(long long)arg1 userId:(id)arg2 token:(id)arg3;
@property(copy, nonatomic) NSData *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (const char *)table;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

