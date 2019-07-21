//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSArray, NSString;

@interface SCPhoneContactsTimerChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    long long _type;
    NSArray *_timestamps;
}

+ (id)changeRequestForPhoneContactsTimer:(id)arg1;
+ (id)creationRequestWithPhoneContactsTimer:(id)arg1;
+ (id)deletionRequestForPhoneContactsTimer:(id)arg1;
- (void).cxx_destruct;
- (id)_phoneContactsTimer;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (id)initWithRowid:(long long)arg1 type:(long long)arg2 timestamps:(id)arg3;
@property(copy, nonatomic) NSArray *timestamps; // @synthesize timestamps=_timestamps;
@property(nonatomic) long long type; // @synthesize type=_type;
- (const char *)table;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

