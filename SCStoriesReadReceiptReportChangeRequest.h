//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSString;

@interface SCStoriesReadReceiptReportChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    _Bool _isPublic;
    _Bool _isOfficial;
    _Bool _isFriend;
    NSString *_receiptId;
    NSString *_flushableStorySnapId;
    NSString *_storySnapServerId;
    long long _state;
    double _viewedTimestamp;
    long long _viewedAction;
    double _expirationDate;
}

+ (id)changeRequestForStoriesReadReceiptReport:(id)arg1;
+ (id)creationRequestWithStoriesReadReceiptReport:(id)arg1;
+ (id)deletionRequestForStoriesReadReceiptReport:(id)arg1;
- (void).cxx_destruct;
- (id)_storiesReadReceiptReport;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
@property(nonatomic) double expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *flushableStorySnapId; // @synthesize flushableStorySnapId=_flushableStorySnapId;
- (id)initWithRowid:(long long)arg1 receiptId:(id)arg2 flushableStorySnapId:(id)arg3 storySnapServerId:(id)arg4 state:(long long)arg5 viewedTimestamp:(double)arg6 viewedAction:(long long)arg7 isPublic:(_Bool)arg8 isOfficial:(_Bool)arg9 isFriend:(_Bool)arg10 expirationDate:(double)arg11;
@property(nonatomic) _Bool isFriend; // @synthesize isFriend=_isFriend;
@property(nonatomic) _Bool isOfficial; // @synthesize isOfficial=_isOfficial;
@property(nonatomic) _Bool isPublic; // @synthesize isPublic=_isPublic;
@property(copy, nonatomic) NSString *receiptId; // @synthesize receiptId=_receiptId;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *storySnapServerId; // @synthesize storySnapServerId=_storySnapServerId;
@property(nonatomic) long long viewedAction; // @synthesize viewedAction=_viewedAction;
@property(nonatomic) double viewedTimestamp; // @synthesize viewedTimestamp=_viewedTimestamp;
- (const char *)table;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

