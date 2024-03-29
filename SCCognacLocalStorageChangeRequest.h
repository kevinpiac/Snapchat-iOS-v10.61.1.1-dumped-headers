//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSString, SCCognacLocalStorageItem;

@interface SCCognacLocalStorageChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    NSString *_itemId;
    NSString *_appId;
    SCCognacLocalStorageItem *_item;
}

+ (id)changeRequestForCognacLocalStorage:(id)arg1;
+ (id)creationRequestWithCognacLocalStorage:(id)arg1;
+ (id)deletionRequestForCognacLocalStorage:(id)arg1;
- (void).cxx_destruct;
- (id)_cognacLocalStorage;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (id)initWithRowid:(long long)arg1 itemId:(id)arg2 appId:(id)arg3 item:(id)arg4;
@property(copy, nonatomic) SCCognacLocalStorageItem *item; // @synthesize item=_item;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (const char *)table;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

