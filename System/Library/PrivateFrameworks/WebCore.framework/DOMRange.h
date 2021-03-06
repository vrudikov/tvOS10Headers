/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:57 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/DOMObject.h>
#import <UIKit/UIWebSelectionBlock.h>

@class NSString, WebArchive, DOMNode;

@interface DOMRange : DOMObject <UIWebSelectionBlock>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) WebArchive * webArchive; 
@property (nonatomic,copy,readonly) NSString * markupString; 
@property (readonly) DOMNode * startContainer; 
@property (readonly) int startOffset; 
@property (readonly) DOMNode * endContainer; 
@property (readonly) int endOffset; 
@property (readonly) BOOL collapsed; 
@property (readonly) DOMNode * commonAncestorContainer; 
@property (copy,readonly) NSString * text; 
+(id)rangeForFirstPosition:(id)arg1 second:(id)arg2 ;
-(id)webFrame;
-(CGRect)boundingRect;
-(CGRect)boundingRectAndInsideFixedPosition:(int*)arg1 ;
-(id)asDomNode;
-(BOOL)selectable;
-(id)parentBlock;
-(BOOL)canShrinkDirectlyToTextOnly;
-(id)enclosingDocument;
-(id)asDomRange;
-(id)rangeOfContents;
-(BOOL)isSameBlock:(id)arg1 ;
-(BOOL)containsBlock:(id)arg1 ;
-(BOOL)strictlyContainsBlock:(id)arg1 ;
-(id)largerParent;
-(BOOL)rendersAsBlock;
-(void)unionWithRange:(id)arg1 ;
-(BOOL)containsRange:(id)arg1 ;
-(id)startPosition;
-(id)endPosition;
-(id)enclosingWordRange;
-(WebArchive *)webArchive;
-(NSString *)markupString;
-(id)lineBoxRects;
-(CGImageRef)renderedImageForcingBlackText:(BOOL)arg1 ;
-(void)setStart:(id)arg1 :(int)arg2 ;
-(void)setEnd:(id)arg1 :(int)arg2 ;
-(short)compareBoundaryPoints:(unsigned short)arg1 :(id)arg2 ;
-(void)deleteContents;
-(id)extractContents;
-(id)createContextualFragment:(id)arg1 ;
-(short)compareNode:(id)arg1 ;
-(short)comparePoint:(id)arg1 offset:(int)arg2 ;
-(BOOL)isPointInRange:(id)arg1 offset:(int)arg2 ;
-(void)expand:(id)arg1 ;
-(void)move:(unsigned)arg1 inDirection:(int)arg2 ;
-(void)extend:(unsigned)arg1 inDirection:(int)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)text;
-(int)endOffset;
-(int)startOffset;
-(void)detach;
-(void)setStart:(id)arg1 offset:(int)arg2 ;
-(void)setEnd:(id)arg1 offset:(int)arg2 ;
-(DOMNode *)startContainer;
-(void)selectNodeContents:(id)arg1 ;
-(BOOL)collapsed;
-(void)insertNode:(id)arg1 ;
-(void)setStartAfter:(id)arg1 ;
-(void)setEndAfter:(id)arg1 ;
-(CGRect)boundingBox;
-(id)_text;
-(id)cloneRange;
-(void)selectNode:(id)arg1 ;
-(DOMNode *)endContainer;
-(short)compareBoundaryPoints:(unsigned short)arg1 sourceRange:(id)arg2 ;
-(DOMNode *)commonAncestorContainer;
-(id)firstNode;
-(id)textRects;
-(void)setStartBefore:(id)arg1 ;
-(void)collapse:(BOOL)arg1 ;
-(void)surroundContents:(id)arg1 ;
-(void)setEndBefore:(id)arg1 ;
-(id)cloneContents;
-(BOOL)intersectsNode:(id)arg1 ;
-(id)toString;
@end

