//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;
@protocol SCComposerJsConvertible><NSCopying;

@interface SCMapPassportDataState : NSObject <NSCopying>
{
    id <SCComposerJsConvertible><NSCopying> _viewModel;
    NSString *_nextPageToken;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1 nextPageToken:(id)arg2;
@property(readonly, copy, nonatomic) NSString *nextPageToken; // @synthesize nextPageToken=_nextPageToken;
@property(readonly, copy, nonatomic) id <SCComposerJsConvertible><NSCopying> viewModel; // @synthesize viewModel=_viewModel;

@end

