//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSString;

@interface SCCLensItem : NSObject <SCComposerJsConvertible, NSCopying>
{
    NSString *_lensId;
    NSString *_name;
    NSString *_deeplinkUrl;
    NSString *_iconUrl;
    NSString *_thumbnailUrl;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *deeplinkUrl; // @synthesize deeplinkUrl=_deeplinkUrl;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (id)initWithLensId:(id)arg1 name:(id)arg2 deeplinkUrl:(id)arg3 iconUrl:(id)arg4 thumbnailUrl:(id)arg5;
@property(copy, nonatomic) NSString *lensId; // @synthesize lensId=_lensId;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

