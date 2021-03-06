/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKTableEntriesWithRowSpacer : NSObject <CRKTableEntries> {
    unsigned int  mIndex;
    <CRKTableEntries> * mOrigin;
    <CRKTableEntry> * mSpacerEntry;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned int)columnCount;
- (id)entryAtRow:(unsigned int)arg1 column:(unsigned int)arg2;
- (id)initWithOrigin:(id)arg1 index:(unsigned int)arg2 spacerEntry:(id)arg3;
- (unsigned int)rowCount;

@end
