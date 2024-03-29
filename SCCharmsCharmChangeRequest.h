//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSString, SCCharmsDescription, SCCharmsGraphic;

@interface SCCharmsCharmChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    _Bool _hideable;
    _Bool _unviewed;
    _Bool _deleted;
    int _charmIdentifier;
    NSString *_ownerIdentifier;
    long long _ownerType;
    NSString *_displayName;
    SCCharmsDescription *_descriptionData;
    NSString *_dialogButtonText;
    SCCharmsGraphic *_graphic;
    long long _displayOrder;
    long long _source;
}

+ (id)changeRequestForCharmsCharm:(id)arg1;
+ (id)creationRequestWithCharmsCharm:(id)arg1;
+ (id)deletionRequestForCharmsCharm:(id)arg1;
- (void).cxx_destruct;
- (id)_charmsCharm;
@property(nonatomic) int charmIdentifier; // @synthesize charmIdentifier=_charmIdentifier;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
@property(nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
@property(copy, nonatomic) SCCharmsDescription *descriptionData; // @synthesize descriptionData=_descriptionData;
@property(copy, nonatomic) NSString *dialogButtonText; // @synthesize dialogButtonText=_dialogButtonText;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) long long displayOrder; // @synthesize displayOrder=_displayOrder;
@property(copy, nonatomic) SCCharmsGraphic *graphic; // @synthesize graphic=_graphic;
@property(nonatomic) _Bool hideable; // @synthesize hideable=_hideable;
- (id)initWithRowid:(long long)arg1 ownerIdentifier:(id)arg2 charmIdentifier:(int)arg3 ownerType:(long long)arg4 displayName:(id)arg5 descriptionData:(id)arg6 dialogButtonText:(id)arg7 graphic:(id)arg8 hideable:(_Bool)arg9 displayOrder:(long long)arg10 unviewed:(_Bool)arg11 source:(long long)arg12 deleted:(_Bool)arg13;
@property(copy, nonatomic) NSString *ownerIdentifier; // @synthesize ownerIdentifier=_ownerIdentifier;
@property(nonatomic) long long ownerType; // @synthesize ownerType=_ownerType;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) _Bool unviewed; // @synthesize unviewed=_unviewed;
- (const char *)table;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

