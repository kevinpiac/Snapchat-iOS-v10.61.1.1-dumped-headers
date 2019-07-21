//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSString;

@interface SCMapPassportCountryViewModel : NSObject <SCComposerJsConvertible, NSCopying>
{
    NSString *_countryId;
    NSString *_title;
    NSString *_subtitle;
    NSString *_imageURL;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *countryId; // @synthesize countryId=_countryId;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
- (id)initWithCountryId:(id)arg1 title:(id)arg2 subtitle:(id)arg3 imageURL:(id)arg4;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
