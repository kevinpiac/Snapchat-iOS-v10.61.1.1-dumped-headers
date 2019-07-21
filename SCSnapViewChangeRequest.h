//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSString, SCCompositeStoryId;

@interface SCSnapViewChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    NSString *_snapId;
    NSString *_context;
    unsigned long long _expirationTimestamp;
    unsigned long long _viewTimestamp;
    SCCompositeStoryId *_compositeStoryId;
}

+ (id)changeRequestForSnapView:(id)arg1;
+ (id)creationRequestWithSnapView:(id)arg1;
+ (id)deletionRequestForSnapView:(id)arg1;
- (void).cxx_destruct;
- (id)_snapView;
@property(copy, nonatomic) SCCompositeStoryId *compositeStoryId; // @synthesize compositeStoryId=_compositeStoryId;
@property(copy, nonatomic) NSString *context; // @synthesize context=_context;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
@property(nonatomic) unsigned long long expirationTimestamp; // @synthesize expirationTimestamp=_expirationTimestamp;
- (id)initWithRowid:(long long)arg1 snapId:(id)arg2 context:(id)arg3 expirationTimestamp:(unsigned long long)arg4 viewTimestamp:(unsigned long long)arg5 compositeStoryId:(id)arg6;
@property(copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
@property(nonatomic) unsigned long long viewTimestamp; // @synthesize viewTimestamp=_viewTimestamp;
- (const char *)table;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

