//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSString;

@interface SCStoriesDeltaCursorMetadataChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    long long _type;
    NSString *_value;
    long long _cursorVersion;
}

+ (id)changeRequestForStoriesDeltaCursorMetadata:(id)arg1;
+ (id)creationRequestWithStoriesDeltaCursorMetadata:(id)arg1;
+ (id)deletionRequestForStoriesDeltaCursorMetadata:(id)arg1;
- (void).cxx_destruct;
- (id)_storiesDeltaCursorMetadata;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
@property(nonatomic) long long cursorVersion; // @synthesize cursorVersion=_cursorVersion;
- (id)initWithRowid:(long long)arg1 type:(long long)arg2 value:(id)arg3 cursorVersion:(long long)arg4;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
- (const char *)table;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

