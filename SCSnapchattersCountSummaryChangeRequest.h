//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSString;

@interface SCSnapchattersCountSummaryChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    unsigned int _type;
    int _value;
}

+ (id)changeRequestForSnapchattersCountSummary:(id)arg1;
+ (id)creationRequestWithSnapchattersCountSummary:(id)arg1;
+ (id)deletionRequestForSnapchattersCountSummary:(id)arg1;
- (id)_snapchattersCountSummary;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (id)initWithRowid:(long long)arg1 type:(unsigned int)arg2 value:(int)arg3;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) int value; // @synthesize value=_value;
- (const char *)table;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

